//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGEditProfileBioLinkHelper : NSObject
{
}

+ (id)attributedStringWithString:(id)arg1 font:(id)arg2 linkColor:(id)arg3 specialFontResults:(id)arg4;
+ (id)attributedStringForBio:(id)arg1 profileLinks:(id)arg2 font:(id)arg3 linkColor:(id)arg4;
+ (id)getResultBeforeOrInRangeOfLocation:(unsigned long long)arg1 fromResults:(id)arg2;
+ (id)linkRangesFromText:(id)arg1;
+ (_Bool)isSearchStringValid:(id)arg1;
+ (_Bool)isStringConnected:(id)arg1;
+ (id)_userHashtagRegex;

@end

