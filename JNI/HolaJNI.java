public class HolaJNI{
	
	static{
	
		System.loadLibrary("Hola");
	
	}
	
	private native void diHola();
	
	public static void main(String args[]){
	
	new HolaJNI().diHola();
	
	}

}