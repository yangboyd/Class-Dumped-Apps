//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEPinStickerViewControllerInputData;

@interface ACCPinStickerViewModel : NSObject
{
    AWEPinStickerViewControllerInputData *_inputData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWEPinStickerViewControllerInputData *inputData; // @synthesize inputData=_inputData;
- (void)p_updateExclusiveStickerContainerStickerHiddenStatusWithCurrentPlayerTime:(double)arg1;
- (void)trackPropPinConfirm;
- (void)seekToTime:(double)arg1;
- (void)setPinStickerInputData:(id)arg1;

@end

