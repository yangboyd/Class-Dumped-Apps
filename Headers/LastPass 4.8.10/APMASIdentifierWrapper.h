//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APMASIdentifierWrapper : NSObject
{
    id _sharedIdentifierManager;
}

+ (id)sharedInstance;
+ (_Bool)iOS14OrAbove;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool limitedAdTracking;
@property(readonly, nonatomic) _Bool hasLimitedAdTracking;
@property(readonly, nonatomic) NSString *resettableDeviceIDStringIfAvailable;
- (id)initWithIdentifierManager:(id)arg1;

@end

