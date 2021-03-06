//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol IESLiveMTEffectsManagerService;

@interface IESLiveMTEffectMessage : NSObject
{
    NSNumber *_effectID;
    NSString *_resourcePath;
    unsigned long long _messageType;
    double _duration;
    id <IESLiveMTEffectsManagerService> _effectsManagerService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMTEffectsManagerService> effectsManagerService; // @synthesize effectsManagerService=_effectsManagerService;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(retain, nonatomic) NSNumber *effectID; // @synthesize effectID=_effectID;
- (_Bool)isStickerEffect;
- (id)initWithEffectID:(id)arg1;
- (id)initWithEffectID:(id)arg1 type:(unsigned long long)arg2;

@end

