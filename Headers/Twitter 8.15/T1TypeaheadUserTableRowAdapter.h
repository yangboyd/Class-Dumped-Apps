//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

@class NSSet, T1UserBadger, TFNTwitterAccount;

@interface T1TypeaheadUserTableRowAdapter : TFNItemsTableRowAdapter
{
    _Bool _showSocialContext;
    _Bool _useDarkMode;
    TFNTwitterAccount *_account;
    T1UserBadger *_badger;
    NSSet *_repliedToUserIDs;
}

@property(nonatomic) _Bool useDarkMode; // @synthesize useDarkMode=_useDarkMode;
@property(copy, nonatomic) NSSet *repliedToUserIDs; // @synthesize repliedToUserIDs=_repliedToUserIDs;
@property(nonatomic) _Bool showSocialContext; // @synthesize showSocialContext=_showSocialContext;
@property(retain, nonatomic) T1UserBadger *badger; // @synthesize badger=_badger;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (unsigned long long)_t1_socialIconForTypeaheadUser:(id)arg1;
- (id)_t1_socialTextForTypeaheadUser:(id)arg1;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;

@end

