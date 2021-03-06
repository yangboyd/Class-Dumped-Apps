//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCCameraWrapper-Protocol.h"

@class IESEffectModel, NSString;
@protocol AWEComposerEffectProtocol;

@protocol ACCEffectProtocol <ACCCameraWrapper>
@property(retain, nonatomic) id <AWEComposerEffectProtocol> currentComposerSticker;
@property(retain, nonatomic) IESEffectModel *currentSticker;
- (void)acc_pauseStickerBGM:(unsigned long long)arg1;
- (void)acc_operateVEComposerEffect:(id <AWEComposerEffectProtocol>)arg1 operation:(long long)arg2 extra:(NSString *)arg3;
- (void)acc_operateComposerEffect:(id <AWEComposerEffectProtocol>)arg1 operation:(long long)arg2 extra:(NSString *)arg3;
- (void)acc_applyVEComposerEffect:(id <AWEComposerEffectProtocol>)arg1 extra:(NSString *)arg2;
- (void)acc_applyComposerEffect:(id <AWEComposerEffectProtocol>)arg1 extra:(NSString *)arg2;
- (void)acc_applyVEStickerEffect:(IESEffectModel *)arg1;
- (void)acc_applyStickerEffect:(IESEffectModel *)arg1;
@end

