//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUECircularSpinnerViewStyle, NSString, UIColor;

@interface GLUETrackPreviewStyle : NSObject <GLUEStyle>
{
    double _size;
    UIColor *_overlayColor;
    double _iconSize;
    UIColor *_iconColor;
    GLUECircularSpinnerViewStyle *_spinnerStyle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) GLUECircularSpinnerViewStyle *spinnerStyle; // @synthesize spinnerStyle=_spinnerStyle;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
@property(copy, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(nonatomic) double size; // @synthesize size=_size;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToTrackPreviewViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

