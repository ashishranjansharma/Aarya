//
//  ARYADataViewController.m
//  Aarya
//
//  Created by Ashish R Sharma on 4/6/13.
//  Copyright (c) 2013 Ashish R Sharma. All rights reserved.
//

#import "ARYADataViewController.h"

@interface ARYADataViewController ()

@end

@implementation ARYADataViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.dataLabel.text = [self.dataObject description];
}

@end
