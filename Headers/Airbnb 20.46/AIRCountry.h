//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString;

@interface AIRCountry : AIRModel
{
    NSString *_countryCode;
    NSString *_countryName;
}

+ (id)idAttributeName;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;

@end

