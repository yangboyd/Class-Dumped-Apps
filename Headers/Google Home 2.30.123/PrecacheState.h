//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PrecacheState : NSObject
{
    double _timestamp;
    NSString *_appID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithAppID:(id)arg1;

@end

