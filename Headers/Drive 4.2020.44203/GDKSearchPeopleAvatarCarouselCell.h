//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GDKAvatarCarouselObject, GDKAvatarView, UILabel;

@interface GDKSearchPeopleAvatarCarouselCell : UICollectionViewCell
{
    GDKAvatarView *_avatarImageView;
    GDKAvatarCarouselObject *_object;
    UILabel *_nameLabel;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) GDKAvatarCarouselObject *object; // @synthesize object=_object;
@property(retain, nonatomic) GDKAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)updateViewWithDisplayName:(id)arg1 structuredName:(id)arg2 monogramID:(id)arg3 image:(id)arg4 fadeInImage:(_Bool)arg5;
- (void)configureWithObject:(id)arg1;
- (void)prepareForReuse;
- (void)makeConstraints;
- (struct CGRect)accessibilityFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

