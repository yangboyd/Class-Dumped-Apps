//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMED2DLanConnection, NSArray, NSString;

@protocol HMEDUSIReceivingDelegate <NSObject>
- (void)D2DLanConnection:(HMED2DLanConnection *)arg1 didReceiveApplicationsList:(NSArray *)arg2;
- (void)D2DLanConnection:(HMED2DLanConnection *)arg1 didReceiveDUSI:(NSString *)arg2;
@end

