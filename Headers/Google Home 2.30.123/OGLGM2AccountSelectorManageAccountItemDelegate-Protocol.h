//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class OGLGM2AccountSelectorManageAccountItem;
@protocol OGLAccount;

@protocol OGLGM2AccountSelectorManageAccountItemDelegate
- (void)manageAccountItem:(OGLGM2AccountSelectorManageAccountItem *)arg1 toggleAccount:(id <OGLAccount>)arg2 on:(_Bool)arg3 callback:(void (^)(_Bool))arg4;
- (void)manageAccountItem:(OGLGM2AccountSelectorManageAccountItem *)arg1 removeAccountFromDevice:(id <OGLAccount>)arg2;
@end

