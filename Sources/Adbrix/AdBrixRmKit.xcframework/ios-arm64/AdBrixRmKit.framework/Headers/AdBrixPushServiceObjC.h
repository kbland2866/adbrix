//
//  AdBrixPushServiceObjC.h
//  SDK-V2-IOS-Abx.Remaster
//
//  Created by 이영한 on 2021/09/03.
//

/* Generated by RuntimeBrowser
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */
#import <UserNotifications/UserNotifications.h>

//@interface AdBrixPushServiceObjC : NSObject
//- (void)didReceiveAbxPush:(UNNotificationRequest *)request withContentHandler:(void (^)(UNNotificationContent *contentToDeliver))contentHandler;
//
//- (void)abxPushServiceExtensionTimeWillExpire;

@interface AdBrixPushServiceObjC : UNNotificationServiceExtension

- (void)didReceiveNotificationRequest:(UNNotificationRequest *)request withContentHandler:(void (^)(UNNotificationContent *contentToDeliver))contentHandler;

// Will be called just before this extension is terminated by the system. You may choose whether to override this method.
- (void)serviceExtensionTimeWillExpire;

@end
