//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEImageStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTSocialListeningSessionViewUserCellStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_initialsTextLabelStyle;
    GLUELabelStyle *_displayNameStyle;
    GLUEImageStyle *_profileImageViewStyle;
    GLUEButtonStyle *_actionButtonStyle;
}

@property(copy, nonatomic) GLUEButtonStyle *actionButtonStyle; // @synthesize actionButtonStyle=_actionButtonStyle;
@property(copy, nonatomic) GLUEImageStyle *profileImageViewStyle; // @synthesize profileImageViewStyle=_profileImageViewStyle;
@property(copy, nonatomic) GLUELabelStyle *displayNameStyle; // @synthesize displayNameStyle=_displayNameStyle;
@property(copy, nonatomic) GLUELabelStyle *initialsTextLabelStyle; // @synthesize initialsTextLabelStyle=_initialsTextLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSocialListeningSessionViewUserCellStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFont:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

