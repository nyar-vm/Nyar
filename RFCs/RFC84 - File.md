RFC84: File Object
==================









```nyar
class File {

	path: String;
	format: String;
	
	
	
	@(String path,String format:"text"){
		self.path = path
		self.format = format
	}
	
	
	
}
```

