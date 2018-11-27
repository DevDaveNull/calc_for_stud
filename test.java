import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JButton;
import java.awt.BorderLayout;
import javax.swing.JLabel;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JProgressBar;
import javax.swing.JSeparator;
import javax.swing.JSlider;

public class test {

	private JFrame frame;
	private int con = 0; 
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					test window = new test();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public test() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 450, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JProgressBar progressBar = new JProgressBar();
		progressBar.setBounds(78, 42, 146, 14);
		frame.getContentPane().add(progressBar);
		
		JSeparator separator = new JSeparator();
		separator.setBounds(153, 102, 271, 87);
		frame.getContentPane().add(separator);
		
		JSlider slider = new JSlider();
		slider.setBounds(10, 160, 200, 26);
		frame.getContentPane().add(slider);
	}
}
