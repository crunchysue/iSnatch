//
//  iSnatchAppDelegate.h
//  iSnatch
//
//  Created by Sue Brown on 2/18/10.
//  Copyright 2010 House of Crunchy. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface iSnatchAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
