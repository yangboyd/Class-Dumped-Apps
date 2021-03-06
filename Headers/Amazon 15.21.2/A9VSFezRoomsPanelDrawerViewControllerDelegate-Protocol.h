//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSFezRoom, A9VSFezRoomsPanelDrawerViewController, NSArray, NSError, NSIndexPath, NSString;

@protocol A9VSFezRoomsPanelDrawerViewControllerDelegate <NSObject>

@optional
- (void)roomsPanelDrawerViewController:(A9VSFezRoomsPanelDrawerViewController *)arg1 didFailToDeleteRoom:(A9VSFezRoom *)arg2;
- (void)roomsPanelDrawerViewController:(A9VSFezRoomsPanelDrawerViewController *)arg1 didDeleteRoomWithIdentifier:(NSString *)arg2 withNextRoomToLoad:(A9VSFezRoom *)arg3 numberOfAvailableRooms:(unsigned long long)arg4;
- (void)roomsPanelDrawerViewController:(A9VSFezRoomsPanelDrawerViewController *)arg1 didSelectRoom:(A9VSFezRoom *)arg2 atIndexPath:(NSIndexPath *)arg3 onSelectionCompletion:(void (^)(void))arg4;
- (void)roomsPanelDrawerViewController:(A9VSFezRoomsPanelDrawerViewController *)arg1 didFailToLoadRoomsWithError:(NSError *)arg2;
- (void)roomsPanelDrawerViewController:(A9VSFezRoomsPanelDrawerViewController *)arg1 didLoadRooms:(NSArray *)arg2;
- (void)roomsPanelDrawerViewControllerWillLoadRooms:(A9VSFezRoomsPanelDrawerViewController *)arg1;
@end

