//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor;

@interface SPTPremiumDestinationUIValueComparisonCardStyle : NSObject <GLUEStyle>
{
    double _cornerRadius;
    double _shadowOpacity;
    double _shadowRadius;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

