//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol DBContentViewObject;

@interface _TtC7Dropbox23ActivityErrorHeaderView : UIView
{
    // Error parsing type: , name: contentViewObject
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: bodyLabel
    // Error parsing type: , name: stackView
}

- (void).cxx_destruct;
- (void)contentViewObjectDidUpdate;
- (void)unbindFromContentViewObject;
- (void)bindToContentViewObject:(id)arg1;
- (struct CGSize)preferredLayoutSizeFittingSize:(struct CGSize)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <DBContentViewObject> contentViewObject; // @synthesize contentViewObject;

@end

