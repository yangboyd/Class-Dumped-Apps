//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LegacyEnumExperimentItem : NSObject
{
    long long _enumValue;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long enumValue; // @synthesize enumValue=_enumValue;
- (void).cxx_destruct;
- (id)initWithValue:(long long)arg1 title:(id)arg2;

@end

