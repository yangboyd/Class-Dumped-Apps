//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GFMIPage : NSObject
{
    long long _type;
    NSArray *_components;
}

+ (id)emptyPage;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *components; // @synthesize components=_components;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)componentsWithType:(long long)arg1;
- (id)description;
- (id)optionalValueForComponentWithType:(long long)arg1;
- (id)valueForComponentWithType:(long long)arg1;
- (_Bool)hasComponentWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 components:(id)arg2;

@end

