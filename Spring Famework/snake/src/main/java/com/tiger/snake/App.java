package com.tiger.snake;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

/**
 * Hello world!
 *
 */
public class App 
{
    private static ApplicationContext context;

	public static void main( String[] args )
    {
    	context = new ClassPathXmlApplicationContext("spring.xml");
        
//    	Type t = (Type) context.getBean("type");
//    	System.out.println(t);
    	
    	
    	Car obj = (Car)context.getBean("car");
        obj.drive();
    }
}
