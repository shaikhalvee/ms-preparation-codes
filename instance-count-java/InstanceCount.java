package practice;

import java.util.ArrayList;
import java.util.List;

public class InstanceCount {

//	public static int countInstance(List<CheckClass> checkClasses) {
//		return CheckClass.getInstanceCount();
//	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int number = 17;
		List<CheckClass> checkClassList = new ArrayList<>();
		for (int i = 0; i < number; i++) {
			checkClassList.add(new CheckClass());
		}
//		System.out.println(countInstance(checkClassList));
		System.out.println(CheckClass.instanceCount);
	}
}
