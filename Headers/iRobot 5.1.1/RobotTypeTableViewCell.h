//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AspenUIComponents/FullWidthBorderedCell.h>

@class UIImageView, UILabel;

@interface RobotTypeTableViewCell : FullWidthBorderedCell
{
    UIImageView *_robotTypeImageView;
    UILabel *_robotTypeName;
    UILabel *_robotTypeDescription;
}

+ (id)cellWithAttributedTypeName:(id)arg1 imageName:(id)arg2 typeDescription:(id)arg3;
+ (id)cellWithTypeName:(id)arg1 imageName:(id)arg2 typeDescription:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *robotTypeDescription; // @synthesize robotTypeDescription=_robotTypeDescription;
@property(nonatomic) __weak UILabel *robotTypeName; // @synthesize robotTypeName=_robotTypeName;
@property(nonatomic) __weak UIImageView *robotTypeImageView; // @synthesize robotTypeImageView=_robotTypeImageView;

@end

