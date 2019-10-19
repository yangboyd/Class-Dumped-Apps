//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEGradientStyle, GLUELabelStyle, NSString, SPTLoginInputFormViewStyle;

@interface SPTLoginViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    SPTLoginInputFormViewStyle *_inputFormStyle;
    double _titleTopMargin;
    double _inputFormTopMargin;
    double _loginButtonTopMargin;
    double _loginWithoutPasswordTopMargin;
    double _loginWithoutPasswordBottomMargin;
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUEButtonStyle *_loginButtonStyle;
    GLUEButtonStyle *_loginWithoutPasswordButtonStyle;
    double _horizontalMargin;
}

@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(copy, nonatomic) GLUEButtonStyle *loginWithoutPasswordButtonStyle; // @synthesize loginWithoutPasswordButtonStyle=_loginWithoutPasswordButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *loginButtonStyle; // @synthesize loginButtonStyle=_loginButtonStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(nonatomic) double loginWithoutPasswordBottomMargin; // @synthesize loginWithoutPasswordBottomMargin=_loginWithoutPasswordBottomMargin;
@property(nonatomic) double loginWithoutPasswordTopMargin; // @synthesize loginWithoutPasswordTopMargin=_loginWithoutPasswordTopMargin;
@property(nonatomic) double loginButtonTopMargin; // @synthesize loginButtonTopMargin=_loginButtonTopMargin;
@property(nonatomic) double inputFormTopMargin; // @synthesize inputFormTopMargin=_inputFormTopMargin;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(copy, nonatomic) SPTLoginInputFormViewStyle *inputFormStyle; // @synthesize inputFormStyle=_inputFormStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

