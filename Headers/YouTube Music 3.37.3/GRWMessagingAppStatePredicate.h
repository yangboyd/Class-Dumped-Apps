//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface GRWMessagingAppStatePredicate : NSObject <NSSecureCoding>
{
    int _targetMinimumValue;
    int _targetMaximumValue;
    NSString *_appStateID;
    NSArray *_stringList;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *stringList; // @synthesize stringList=_stringList;
@property(readonly, nonatomic) int targetMaximumValue; // @synthesize targetMaximumValue=_targetMaximumValue;
@property(readonly, nonatomic) int targetMinimumValue; // @synthesize targetMinimumValue=_targetMinimumValue;
@property(readonly, nonatomic) NSString *appStateID; // @synthesize appStateID=_appStateID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToAppStatePredicate:(id)arg1;
- (_Bool)isValid;
- (id)initWithAppStateID:(id)arg1 targetMinimumValue:(int)arg2 targetMaximumValue:(int)arg3 stringList:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (_Bool)evaluateStringListAppStateWithMessagingDelegate:(id)arg1;
- (_Bool)evaluateNumericAppStateWithMessagingDelegate:(id)arg1;
- (_Bool)evaluatePredicateWithMessagingDelegate:(id)arg1;

@end

