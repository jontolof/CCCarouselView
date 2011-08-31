//
//  CCCarouselViewCell.h
//  CCCarouselView
//
//  Created by Jont Olof Lyttkens on 2011-08-30.
//  Copyright 2011 Mobile Strategist and iOS Developer. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CCCarouselViewCell : UIView {
    UIImageView *imageView;
	UILabel     *label;
	UILabel     *detailLabel;
}
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel     *label;
@property (nonatomic, retain) UILabel     *detailLabel;
@end
