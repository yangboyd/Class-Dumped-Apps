//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GRWKillSwitchSignature : NSObject
{
    long long _version;
    unsigned long long _operator;
    unsigned long long _type;
    NSString *_underlayingString;
}

+ (unsigned long long)operatorForString:(id)arg1;
+ (unsigned long long)typeForString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *underlayingString; // @synthesize underlayingString=_underlayingString;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long operator; // @synthesize operator=_operator;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (id)stringRepesentation;
- (_Bool)includesVersion:(long long)arg1;
- (_Bool)shouldWipe;
- (id)initWithString:(id)arg1;

@end

