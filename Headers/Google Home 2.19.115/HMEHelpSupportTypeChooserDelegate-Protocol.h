//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMEHelpSupportTypeChooserViewController, NSString;

@protocol HMEHelpSupportTypeChooserDelegate <NSObject>
- (void)supportTypeChooserDidClose:(HMEHelpSupportTypeChooserViewController *)arg1;
- (void)supportTypeChooser:(HMEHelpSupportTypeChooserViewController *)arg1 withContext:(NSString *)arg2 didSelectSupportType:(long long)arg3;
@end

