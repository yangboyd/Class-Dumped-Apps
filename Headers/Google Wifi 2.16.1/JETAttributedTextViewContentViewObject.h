//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOContentViewObject-Protocol.h"

@class NSAttributedString, NSString;

@interface JETAttributedTextViewContentViewObject : NSObject <GOOContentViewObject>
{
    NSAttributedString *_string;
    unsigned long long _accessibilityTraits;
}

+ (id)objectWithAttributedString:(id)arg1 accessibilityTraits:(unsigned long long)arg2;
@property(nonatomic) unsigned long long accessibilityTraits; // @synthesize accessibilityTraits=_accessibilityTraits;
@property(copy, nonatomic) NSAttributedString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithAttributedString:(id)arg1 accessibilityTraits:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

