//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSString, TOSearchBar;

@protocol TOSearchBarDelegate <NSObject>

@optional
- (void)searchBarCancelButtonTapped:(TOSearchBar *)arg1;
- (void)searchBarSearchButtonTapped:(TOSearchBar *)arg1;
- (void)searchBarClearButtonTapped:(TOSearchBar *)arg1;
- (_Bool)searchBar:(TOSearchBar *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)searchBar:(TOSearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarDidEndEditing:(TOSearchBar *)arg1;
- (_Bool)searchBarShouldEndEditing:(TOSearchBar *)arg1;
- (void)searchBarDidBeginEditing:(TOSearchBar *)arg1;
- (_Bool)searchBarShouldBeginEditing:(TOSearchBar *)arg1;
@end

