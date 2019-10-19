//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OGLTheming-Protocol.h"

@class NSString;
@protocol OGLColorThemeProtocol, OGLDynamicColorTheme;

@interface OGLTheme : NSObject <OGLTheming>
{
    _Bool _updateByStyleTrait;
    id <OGLColorThemeProtocol> _colorTheme;
    id <OGLColorThemeProtocol> _lightColorTheme;
    id <OGLColorThemeProtocol> _darkColorTheme;
    id <OGLDynamicColorTheme> _dynamicTheme;
}

+ (id)getThemeFromView:(id)arg1;
+ (id)getThemeFromViewController:(id)arg1;
@property(retain, nonatomic) id <OGLDynamicColorTheme> dynamicTheme; // @synthesize dynamicTheme=_dynamicTheme;
@property(nonatomic) _Bool updateByStyleTrait; // @synthesize updateByStyleTrait=_updateByStyleTrait;
@property(readonly, nonatomic) id <OGLColorThemeProtocol> darkColorTheme; // @synthesize darkColorTheme=_darkColorTheme;
@property(readonly, nonatomic) id <OGLColorThemeProtocol> lightColorTheme; // @synthesize lightColorTheme=_lightColorTheme;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <OGLColorThemeProtocol> colorTheme; // @synthesize colorTheme=_colorTheme;
- (id)initWithLightColorTheme:(id)arg1 darkColorTheme:(id)arg2;
- (id)initWithColorTheme:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

