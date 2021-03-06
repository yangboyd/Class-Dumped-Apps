//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UVSCollectionViewController.h"

#import "UVSCheckableObjectDelegate-Protocol.h"

@class NSArray;
@protocol UVSMultipleSelectCollectionViewControllerDelegate;

@interface UVSMultipleSelectCollectionViewController : UVSCollectionViewController <UVSCheckableObjectDelegate>
{
    NSArray *_choices;
    id <UVSMultipleSelectCollectionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UVSMultipleSelectCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)processChangeOnObject:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didToggleCheckableObject:(id)arg1;
- (id)writeInTextAtIndex:(unsigned long long)arg1;
- (void)viewDidLoad;
- (id)initWithAnswerChoices:(id)arg1;

@end

