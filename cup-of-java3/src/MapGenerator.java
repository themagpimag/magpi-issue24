public class MapGenerator {

  public static void main(String[] args) {
    if (args.length != 3) {
      System.out.println("I need three parameters: "
          + "map-number, height and width.");
      return;
    }
    int mapNumber = new Integer(args[0]);
    int height = new Integer(args[1]);
    int width = new Integer(args[2]);
    Terrain land = new Terrain(mapNumber, height, width);
    land.setArea(0, 0, height, width, '.'); // ground
    land.setRandomAreas(1, 1, 't', 30); // trees
    land.setRandomAreas(height / 4, width / 4, 'T', 3); // woods
    land.setRandomAreas(1, 1, 'o', 20); // rocks
    land.setRandomAreas(height / 4, width / 5, ' ', 3); // lakes
    land.setRandomAreas(height / 6, width / 10, ' ', 12); // ponds
    land.setRandomAreas(1, 1, '$', 1); // treasure
    System.out.println(land.show());
  }

}
