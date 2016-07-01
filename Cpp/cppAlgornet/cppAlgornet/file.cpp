#include <fstream>

#define F_IN = true;
#define F_OUT = false;

class File {
	protected:
		bool fileType;
		char* fileName;
		char* _stream_;
		//Add file streams here;

	public:
	//Name: %Class Constructer% ( fileN [file name] : Character Array (String), fileT [file type] : bool [true = in, false = out] );
	//Pre: No previously initiated file operator.
	//Post: A class handler to handle files using my library.
	File( char* fileN, bool fileT) {
		fileName = fileN;
		fileType = fileT;

	}

	//Name: writeStream( null );
	//Pre: Interface has kept pushing new lines of code to the _stream_, so _stream_ is full of text that can be sent to a file.
	//Post: Write the local stream to a file. If this class is not set to write, then throw new FileException.
	//Todo: Make the throw statement throw type FileException
	//Todo: Write FileException Class.
	void writeStream() {
		if (!fileType) {
			
		}
		else {
			throw 1;
		}
	}

	//Name: flushStream( null );
	//Pre: There has been pushes to file stream, and somewhere it was decided that the stream needed to be flushed.
	//Post: The stream was "flushed" by nullifying the data in it.
	void flushStream() {
		_stream_ = "";
	}

};