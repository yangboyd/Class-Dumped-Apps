//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (MSAAdditions)
+ (_Bool)equalsCaseInsensitive:(id)arg1 b:(id)arg2 nilResult:(_Bool)arg3;
+ (_Bool)equalsCaseInsensitive:(id)arg1 b:(id)arg2;
+ (id)getNSStringXmlEntityReplacements;
+ (id)getNSStringURLQueryPartAllowedCharacterSet;
- (_Bool)hasPrefix:(id)arg1 caseInsensitive:(_Bool)arg2;
- (_Bool)integerValueStrict:(long long *)arg1;
- (_Bool)int32ValueHexStrict:(int *)arg1;
- (id)stringByEscapingXmlEntities;
- (id)stringByAddingPercentEncodingForQueryStringValue;
@end

