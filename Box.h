class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       void setHeight(int h);
       void setLength(int l);
       void setWidth(int w);
       // write prototypes of getters for length, width and height
       int getHeight();
       int getLength();
       int getWidth();

       int calcVolume();
};
