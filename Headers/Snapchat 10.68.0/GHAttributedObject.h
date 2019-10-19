//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GHAttributedObject : NSObject
{
    NSDictionary *_attributes;
    unsigned long long _calculatedHash;
}

+ (id)overideObjectsForPrototype:(id)arg1 withDictionary:(id)arg2;
@property(nonatomic) unsigned long long calculatedHash; // @synthesize calculatedHash=_calculatedHash;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)cloneWithOverridingDictionary:(id)arg1;

@end

