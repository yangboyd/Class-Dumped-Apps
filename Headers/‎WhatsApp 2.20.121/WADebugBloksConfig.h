//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, NSString;

@interface WADebugBloksConfig : NSObject
{
    NSString *_appID;
    NSOrderedSet *_parameters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSOrderedSet *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (unsigned long long)hash;
- (_Bool)isEqualToDebugBloksConfig:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithAppID:(id)arg1 parameters:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

