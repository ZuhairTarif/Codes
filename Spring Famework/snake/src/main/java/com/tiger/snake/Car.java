package com.tiger.snake;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

@Component
public class Car implements Vehicle{

	@Autowired //Annotation
	private Type type;
	
	public Type getType() {
		return type;
	}


	public void setType(Type type) {
		this.type = type;
	}


	public  void drive() {
		// TODO Auto-generated method stub
		System.out.println("Car " + type);
	}

}
