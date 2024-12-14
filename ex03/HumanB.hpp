/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <rilliano@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:43:23 by rilliano          #+#    #+#             */
/*   Updated: 2024/12/15 00:06:37 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB {
    private:
        std::string name;
        Weapon* weapon;

    public:
        HumanB(std::string name);
        void setWeapon(Weapon& weapon);
        void attack() const;
};

#endif
