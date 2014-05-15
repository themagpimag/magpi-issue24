import java.util.Random;

public class Terrain {

  private Random r;
  private char[][] tiles;

  public Terrain(int mapNumber, int height, int width) {
    this.r = new Random(mapNumber);
    this.tiles = new char[height][width];
  }

  public void setArea(int fromH, int fromW, int toH, int toW, char symbol) {
    for (int x = fromH; x < toH; x++) {
      for (int y = fromW; y < toW; y++) {
        this.tiles[x][y] = symbol;
      }
    }
  }

  public void setRandomAreas(int height, int width, char symbol, int howMany) {
    for (int i = 0; i < howMany; i++) {
      int x = this.r.nextInt(this.tiles.length - height + 1);
      int y = this.r.nextInt(this.tiles[0].length - width + 1);
      this.setArea(x, y, x + height, y + width, symbol);
    }
  }

  public String show() {
    StringBuilder sb = new StringBuilder();
    for (int x = 0; x < this.tiles.length; x++) {
      for (int y = 0; y < this.tiles[x].length; y++) {
        sb.append(this.tiles[x][y]);
      }
      sb.append("\n");
    }
    return sb.toString();
  }
}
