/*include <iostream>
#include <string>
#include <map>
#include <memory>

// 图片读取器接口
class ImageReader {
public:
    virtual void read(const std::string& filePath) = 0;
    virtual ~ImageReader() = default;
};

// GIF图片读取器
class GifReader : public ImageReader {
public:
    void read(const std::string& filePath) override {
        std::cout << "Reading GIF image from " << filePath << std::endl;
    }
};

// JPEG图片读取器
class JpgReader : public ImageReader {
public:
    void read(const std::string& filePath) override {
        std::cout << "Reading JPEG image from " << filePath << std::endl;
    }
};

// 图片读取器工厂接口
class ImageReaderFactory {
public:
    virtual std::unique_ptr<ImageReader> createReader(const std::string& type) = 0;
    virtual ~ImageReaderFactory() = default;
};

// 具体图片读取器工厂
class ConcreteImageReaderFactory : public ImageReaderFactory {
public:
    std::unique_ptr<ImageReader> createReader(const std::string& type) override {
        if (type == "GIF") {
            return std::make_unique<GifReader>();
        } else if (type == "JPEG") {
            return std::make_unique<JpgReader>();
        }
        throw std::invalid_argument("Unsupported image type");
    }
};

int main() {
    ConcreteImageReaderFactory factory;
    std::unique_ptr<ImageReader> reader = factory.createReader("GIF");
    reader->read("example.gif");

    reader = factory.createReader("JPEG");
    reader->read("example.jpg");

    return 0;
}
/*

 class shape{
 public:
 virtual ~shape();
 virtual void draw() const =0;
 virtual void erase()const =0;
 }；
 clase Triangle{
 public:
 virtual  void draw()  const override{ cout<"draw the picture"<<endl;}
 virtual  void erase() const override{ cont<<"erase the picture"<<endl;}
}
clase Circle{
public :
virtual  void draw()  const override{ cout<"draw the Circle"<<endl;}
virtual  void erase() const override{ cont<<"erase the Circle"<<endl;}
}
clase Rectangule{
public :
virtual  void draw()  const override{ cout<"draw the Rectangule"<<endl;}
virtual  void erase() const override{ cont<<"erase the Rectangule"<<endl;}
}
 clase ShapeFactory{
 public :
 virtual ~ShapeFactory();
 virtual unique_per<shape> createShape(const string& type) const =0;
 }
 class ConcreteShapeFactory:public ShapeFactory{
public :
 virtual unique_per<shape> createShape(const string& type) const override{
 if (type=="Triangle"){
 return make_unique<Triangle>(); }
 if(type=="Circle"){
 return make_unique<Circle>(); }
 if(type=="Rectangule"){
 return make_unique<Rectangule>(); }
 throw invalid_argument("Unsupported shape type");
 }
 int main(){
 ConcreteShapeFactory factory;
 unique_per<shape> shape = factory.createShape("Triangle");
 shape->draw();
 shape->erase();
 return 0;
 }
 class pianchuli{
 private:
 }
 */
#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("example.txt");
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cout << "Unable to open file";
    }
    return 0;
}

