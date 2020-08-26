class HapiRGB {

private:
  int red;
  int blue;
  int gree;
  int rVal = 254;
  int gVal = 1;
  int bVal = 127;
  int rDir = -1;
  int gDir = 1;
  int bDir = -1;
public: 
  HapiRGB(int r, int g, int b);
	void Red();
  void Green();
  void Blue();
  void Raspberry();
  void Cyan();
  void Yellow();
  void Mageneta();
  void White();
  void Flash(int wait);
  void Orange();
  void Violet();
  void Pink();
  void Fade(int del);
  void FlashRGB(int delwa);
};