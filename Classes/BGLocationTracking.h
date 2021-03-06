//
//  BGLocationTracking.h
//  BGLocationTracking
//
//  Created by Alex Shmaliy on 8/20/13.
//  Modified by Christopher Ketant 
//  MIT Licensed
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class CDVInterface;
@interface BGLocationTracking : NSObject<CLLocationManagerDelegate>
    
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) CDVInterface *cordInterface;

/**
 * Initialize the Location Tracking
 * with the Cordova Interface reference
 *
 *@return - self
 *@param - Cordova Interface reference
 **/
-(id) initWithCDVInterface: (CDVInterface *)cordova;

/**
 * Are we currently tracking
 *
 *@return - BOOL
 **/
-(BOOL) isTracking;

/**
 * Resume Tracking
 *
 **/
-(void) resumeTracking;

/**
 * Pause Tracking
 *
 **/
-(void) pauseTracking;
@end
