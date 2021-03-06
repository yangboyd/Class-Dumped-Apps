//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface UAActionArguments : NSObject
{
    long long _situation;
    id _value;
    NSDictionary *_metadata;
}

+ (id)argumentsWithValue:(id)arg1 withSituation:(long long)arg2 metadata:(id)arg3;
+ (id)argumentsWithValue:(id)arg1 withSituation:(long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) long long situation; // @synthesize situation=_situation;
- (id)description;
@property(readonly, nonatomic) NSString *situationString;
- (id)initWithValue:(id)arg1 withSituation:(long long)arg2 metadata:(id)arg3;
- (id)initWithValue:(id)arg1 withSituation:(long long)arg2;

@end

