//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBCollectionViewTableLayoutViewController.h"

#import "DBShareSuggestionViewControllerSelectionExposing-Protocol.h"

@protocol DBShareSuggestionViewControllerDelegate;

@interface _TtC7Dropbox29ShareSuggestionViewController : DBCollectionViewTableLayoutViewController <DBShareSuggestionViewControllerSelectionExposing>
{
    // Error parsing type: , name: hasSuggestions
    // Error parsing type: , name: delegate
    // Error parsing type: , name: selection
    // Error parsing type: , name: loggingClient
    // Error parsing type: , name: selectionSynchronizer
}

- (void).cxx_destruct;
@property(nonatomic, retain) id selection; // @synthesize selection;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionModelDidRefresh:(id)arg1;
- (id)statusMessageForState:(long long)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1 bindingController:(id)arg2;
@property(nonatomic) __weak id <DBShareSuggestionViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool hasSuggestions; // @synthesize hasSuggestions;

@end

