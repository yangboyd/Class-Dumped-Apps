//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

#import <ChromeInternal/DSCPropertyHandler-Protocol.h>

@class NSString;

@interface YTIRippleEffectProperties : GPBMessage <DSCPropertyHandler>
{
}

+ (id)descriptor;
+ (int)propertyNumber;
+ (id)dsc_parseFromData:(id)arg1 error:(id *)arg2;
- (void)applyRippleTo:(id)arg1 withContext:(id)arg2;
- (_Bool)dsc_performDefaultHandling;
- (_Bool)dsc_handlePropertiesWithController:(id)arg1 context:(id)arg2 viewController:(id)arg3 model:(id)arg4 error:(id *)arg5;
- (void)applyPropertiesTo:(id)arg1 withContext:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool clipToView; // @dynamic clipToView;
@property(nonatomic) unsigned int color; // @dynamic color;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasClipToView; // @dynamic hasClipToView;
@property(nonatomic) _Bool hasColor; // @dynamic hasColor;
@property(nonatomic) _Bool hasRadius; // @dynamic hasRadius;
@property(readonly) unsigned long long hash;
@property(nonatomic) int radius; // @dynamic radius;
@property(readonly) Class superclass;

@end

