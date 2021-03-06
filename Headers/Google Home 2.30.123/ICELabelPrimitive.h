//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICEIntrinsicallySizedPrimitive.h"

@class NSAttributedString;

@interface ICELabelPrimitive : ICEIntrinsicallySizedPrimitive
{
    _Bool _alwaysShowsTruncationString;
    _Bool _copyGestureEnabled;
    _Bool _areLinksAccessible;
    NSAttributedString *_attributedText;
    unsigned long long _maximumLineCount;
    NSAttributedString *_truncationAttributedString;
}

+ (_Bool)supportsSecureCoding;
+ (Class)mutableSubclass;
- (void).cxx_destruct;
@property(nonatomic) _Bool areLinksAccessible; // @synthesize areLinksAccessible=_areLinksAccessible;
@property(nonatomic) _Bool copyGestureEnabled; // @synthesize copyGestureEnabled=_copyGestureEnabled;
@property(nonatomic) _Bool alwaysShowsTruncationString; // @synthesize alwaysShowsTruncationString=_alwaysShowsTruncationString;
@property(retain, nonatomic) NSAttributedString *truncationAttributedString; // @synthesize truncationAttributedString=_truncationAttributedString;
@property(nonatomic) unsigned long long maximumLineCount; // @synthesize maximumLineCount=_maximumLineCount;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)validateCopyWithZone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)init;

@end

