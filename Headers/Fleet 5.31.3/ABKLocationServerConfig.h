//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Appboy_iOS_SDK/NSCoding-Protocol.h>

@interface ABKLocationServerConfig : NSObject <NSCoding>
{
    _Bool _enabled;
    long long _distance;
    double _time;
}

@property double time; // @synthesize time=_time;
@property long long distance; // @synthesize distance=_distance;
@property _Bool enabled; // @synthesize enabled=_enabled;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (_Bool)isEqualToLocationServerConfig:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

