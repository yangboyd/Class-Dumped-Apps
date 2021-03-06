//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESettingsItem.h"

@class NSString;

@interface HMEMaterialBannerSettingsItem : HMESettingsItem
{
    NSString *_leadingButtonTitle;
    NSString *_trailingButtonTitle;
    CDUnknownBlockType _leadingButtonActionBlock;
    CDUnknownBlockType _trailingButtonActionBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType trailingButtonActionBlock; // @synthesize trailingButtonActionBlock=_trailingButtonActionBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType leadingButtonActionBlock; // @synthesize leadingButtonActionBlock=_leadingButtonActionBlock;
@property(readonly, copy, nonatomic) NSString *trailingButtonTitle; // @synthesize trailingButtonTitle=_trailingButtonTitle;
@property(readonly, copy, nonatomic) NSString *leadingButtonTitle; // @synthesize leadingButtonTitle=_leadingButtonTitle;
- (id)initWithTitle:(id)arg1 image:(id)arg2 leadingButtonTitle:(id)arg3 leadingButtonActionBlock:(CDUnknownBlockType)arg4 trailingButtonTitle:(id)arg5 trailingButtonActionBlock:(CDUnknownBlockType)arg6 cellClass:(Class)arg7;

@end

