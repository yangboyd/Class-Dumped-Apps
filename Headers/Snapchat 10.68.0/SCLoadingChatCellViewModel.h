//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseChatCellViewModel.h"

@interface SCLoadingChatCellViewModel : SCBaseChatCellViewModel
{
    _Bool _belowTheFold;
    long long _loadingState;
}

@property(nonatomic) _Bool belowTheFold; // @synthesize belowTheFold=_belowTheFold;
@property(nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
- (_Bool)isFirstViewModel;
- (_Bool)isEqual:(id)arg1;
- (_Bool)shouldDisplayBelowFoldInChat;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)identifier;
- (id)reusableCellIdentifier;
- (double)calculateHeight;
- (id)initServerLoadingViewModel;

@end

